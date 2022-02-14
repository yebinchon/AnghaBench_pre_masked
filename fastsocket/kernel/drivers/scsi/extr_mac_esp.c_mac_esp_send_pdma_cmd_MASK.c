
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mac_esp_priv {scalar_t__ error; } ;
struct esp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mac_esp_priv* FUNC_0 (struct esp*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (struct esp*) ;
 scalar_t__ FUNC_7 (struct esp*) ;
 int FUNC_8 (struct esp*,int ) ;

__attribute__((used)) static void FUNC_9(struct esp *VAR_3, u32 VAR_4, u32 VAR_5,
      u32 VAR_6, int VAR_7, u8 VAR_8)
{
 struct mac_esp_priv *VAR_9 = FUNC_0(VAR_3);
 unsigned long VAR_10;

 FUNC_5(VAR_10);

 VAR_9->error = 0;

 if (!VAR_7)
  FUNC_8(VAR_3, VAR_0);

 FUNC_3((VAR_5 >> 0) & 0xFF, VAR_1);
 FUNC_3((VAR_5 >> 8) & 0xFF, VAR_2);

 FUNC_8(VAR_3, VAR_8);

 do {
  unsigned int VAR_11 = VAR_5 >> 5;
  unsigned int VAR_12 = (VAR_5 & 0x1F) >> 1;
  unsigned int VAR_13 = VAR_5 & 1;
  unsigned int VAR_14 = VAR_4;

  if (FUNC_6(VAR_3))
   break;

  if (VAR_7) {
   FUNC_1("%4@,%0@+");

   VAR_5 -= VAR_4 - VAR_14;
  } else {
   unsigned int VAR_15;

   FUNC_1("%0@+,%4@");

   if (FUNC_7(VAR_3))
    break;

   VAR_15 = (FUNC_2(VAR_2) << 8) + FUNC_2(VAR_1);
   VAR_4 = VAR_14 + VAR_5 - VAR_15;
   VAR_5 = VAR_15;
  }
 } while (VAR_5);

 FUNC_4(VAR_10);
}
