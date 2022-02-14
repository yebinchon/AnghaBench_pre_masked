
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct wl1251 {size_t* nvs; size_t nvs_len; int fw_len; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,size_t) ;
 int FUNC_2 (struct wl1251*,int,size_t) ;
 int FUNC_3 (struct wl1251*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct wl1251 *VAR_5)
{
 size_t VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 u8 *VAR_13, *VAR_14;

 VAR_14 = VAR_5->nvs;
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 VAR_13 = VAR_14;

 VAR_6 = VAR_5->nvs_len;
 VAR_9 = VAR_5->fw_len;
 while (VAR_13[0]) {
  VAR_8 = VAR_13[0];
  VAR_11 = (VAR_13[1] & 0xfe) | ((u32)(VAR_13[2] << 8));


  VAR_13 += 3;

  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
   VAR_12 = (VAR_13[0] | (VAR_13[1] << 8)
          | (VAR_13[2] << 16) | (VAR_13[3] << 24));

   FUNC_1(VAR_0,
         "nvs burst write 0x%x: 0x%x",
         VAR_11, VAR_12);
   FUNC_2(VAR_5, VAR_11, VAR_12);

   VAR_13 += 4;
   VAR_11 += 4;
  }
 }





 VAR_13 += 7;
 VAR_6 -= VAR_13 - VAR_14;
 VAR_6 = FUNC_0(VAR_6, 4);


 FUNC_3(VAR_5, VAR_9,
        VAR_2,
        VAR_4,
        VAR_3);


 VAR_7 = 0;
 while (VAR_7 < VAR_6) {
  VAR_12 = (VAR_13[0] | (VAR_13[1] << 8)
         | (VAR_13[2] << 16) | (VAR_13[3] << 24));

  FUNC_1(VAR_0,
        "nvs write table 0x%x: 0x%x",
        VAR_9, VAR_12);
  FUNC_2(VAR_5, VAR_9, VAR_12);

  VAR_13 += 4;
  VAR_7 += 4;
  VAR_9 += 4;
 }

 return 0;
}
