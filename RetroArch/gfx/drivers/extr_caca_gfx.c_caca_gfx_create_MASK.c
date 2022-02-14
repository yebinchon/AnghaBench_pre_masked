
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,scalar_t__,scalar_t__,int ,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_6(void)
{
   VAR_1 = FUNC_0(((void*)0));
   VAR_0 = FUNC_2(VAR_1);

   if(!VAR_6 || !VAR_4)
   {
      VAR_6 = FUNC_4(VAR_0);
      VAR_4 = FUNC_3(VAR_0);
   }

   if (VAR_3)
      VAR_2 = FUNC_1(32, VAR_6, VAR_4, VAR_5,
                            0x00ff0000, 0xff00, 0xff, 0x0);
   else
      VAR_2 = FUNC_1(16, VAR_6, VAR_4, VAR_5,
                            0xf800, 0x7e0, 0x1f, 0x0);

   FUNC_5(&VAR_6, &VAR_4);
}
