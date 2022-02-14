
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wl1271 {int * fw; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wl1271*,int *,int,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(struct wl1271 *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6 = 0;
 u8 *VAR_7;

 VAR_7 = VAR_2->fw;
 VAR_3 = FUNC_0((__be32 *) VAR_7);
 VAR_7 += sizeof(u32);

 FUNC_2(VAR_0, "firmware chunks to be uploaded: %u", VAR_3);

 while (VAR_3--) {
  VAR_4 = FUNC_0((__be32 *) VAR_7);
  VAR_7 += sizeof(u32);
  VAR_5 = FUNC_0((__be32 *) VAR_7);
  VAR_7 += sizeof(u32);

  if (VAR_5 > 300000) {
   FUNC_3("firmware chunk too long: %u", VAR_5);
   return -VAR_1;
  }
  FUNC_2(VAR_0, "chunk %d addr 0x%x len %u",
        VAR_3, VAR_4, VAR_5);
  VAR_6 = FUNC_1(VAR_2, VAR_7, VAR_5, VAR_4);
  if (VAR_6 != 0)
   break;
  VAR_7 += VAR_5;
 }

 return VAR_6;
}
