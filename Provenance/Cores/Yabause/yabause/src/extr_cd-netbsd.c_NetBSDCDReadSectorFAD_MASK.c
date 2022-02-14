
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int syncHdr ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (void*,int const*,int) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static int FUNC_3(u32 VAR_2, void *VAR_3) {
       static const s8 VAR_4[] = {
           0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
           0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00 };

       if (VAR_1 != -1)
       {
               FUNC_1(VAR_3, VAR_4, sizeof (VAR_4));
               FUNC_0(VAR_1, (VAR_2 - 150) * 2048, VAR_0);
               FUNC_2(VAR_1, (char *)VAR_3 + 0x10, 2048);

               return 1;
       }

       return 0;
}
