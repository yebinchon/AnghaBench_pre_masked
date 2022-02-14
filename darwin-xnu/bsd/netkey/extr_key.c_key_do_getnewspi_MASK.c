
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct secasindex {scalar_t__ proto; } ;
struct sadb_spirange {int sadb_spirange_min; int sadb_spirange_max; } ;
struct TYPE_2__ {int getspi_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct secasindex*,int) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static u_int32_t
FUNC_4(
     struct sadb_spirange *VAR_8,
     struct secasindex *VAR_9)
{
 u_int32_t VAR_10;
 u_int32_t VAR_11, VAR_12;
 int VAR_13 = VAR_5;

 FUNC_0(VAR_7, VAR_1);


 if (VAR_8 != ((void*)0)) {
  VAR_11 = VAR_8->sadb_spirange_min;
  VAR_12 = VAR_8->sadb_spirange_max;
 } else {
  VAR_11 = VAR_4;
  VAR_12 = VAR_3;
 }

 if (VAR_9->proto == VAR_0) {
  u_int32_t VAR_14;
  if (VAR_11 >= 0x10000)
   VAR_11 = 0xffff;
  if (VAR_12 >= 0x10000)
   VAR_12 = 0xffff;
  if (VAR_11 > VAR_12) {
   VAR_14 = VAR_11; VAR_11 = VAR_12; VAR_12 = VAR_14;
  }
 }

 if (VAR_11 == VAR_12) {
  if (FUNC_2(VAR_9, VAR_11) != ((void*)0)) {
   FUNC_1((VAR_2, "key_do_getnewspi: SPI %u exists already.\n", VAR_11));
   return 0;
  }

  VAR_13--;
  VAR_10 = VAR_11;

 } else {

  u_int32_t VAR_15 = VAR_12 - VAR_11 + 1;


  VAR_10 = 0;


  while (VAR_13--) {
   u_int32_t VAR_16 = FUNC_3();


   VAR_10 = (VAR_15 == 0 ? VAR_16 : VAR_11 + (VAR_16 % VAR_15));

   if (FUNC_2(VAR_9, VAR_10) == ((void*)0))
    break;
  }

  if (VAR_13 == 0 || VAR_10 == 0) {
   FUNC_1((VAR_2, "key_do_getnewspi: to allocate spi is failed.\n"));
   return 0;
  }
 }


 VAR_6.getspi_count =
 (VAR_6.getspi_count + VAR_5 - VAR_13) / 2;

 return VAR_10;
}
