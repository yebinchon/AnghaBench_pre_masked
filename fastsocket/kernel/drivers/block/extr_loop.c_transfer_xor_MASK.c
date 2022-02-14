
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct loop_device {char* lo_encrypt_key; int lo_encrypt_key_size; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 char* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct loop_device *VAR_3, int VAR_4,
   struct page *VAR_5, unsigned VAR_6,
   struct page *VAR_7, unsigned VAR_8,
   int VAR_9, sector_t VAR_10)
{
 char *VAR_11 = FUNC_1(VAR_5, VAR_0) + VAR_6;
 char *VAR_12 = FUNC_1(VAR_7, VAR_1) + VAR_8;
 char *VAR_13, *VAR_14, *VAR_15;
 int VAR_16, VAR_17;

 if (VAR_4 == VAR_2) {
  VAR_13 = VAR_11;
  VAR_14 = VAR_12;
 } else {
  VAR_13 = VAR_12;
  VAR_14 = VAR_11;
 }

 VAR_15 = VAR_3->lo_encrypt_key;
 VAR_17 = VAR_3->lo_encrypt_key_size;
 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++)
  *VAR_14++ = *VAR_13++ ^ VAR_15[(VAR_16 & 511) % VAR_17];

 FUNC_2(VAR_12, VAR_1);
 FUNC_2(VAR_11, VAR_0);
 FUNC_0();
 return 0;
}
