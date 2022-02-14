
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int opacity; } ;
typedef TYPE_1__ dispserv_x11_t ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,unsigned char const*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_3(void *VAR_4, unsigned VAR_5)
{
   dispserv_x11_t *VAR_6 = (dispserv_x11_t*)VAR_4;
   Atom VAR_7 = FUNC_2(VAR_2, "_NET_WM_WINDOW_OPACITY", VAR_0);
   Atom VAR_8 = FUNC_2(VAR_2, "CARDINAL", VAR_0);

   VAR_6->opacity = VAR_5;

   VAR_5 = VAR_5 * ((unsigned)-1 / 100.0);

   if (VAR_5 == (unsigned)-1)
      FUNC_1(VAR_2, VAR_3, VAR_7);
   else
      FUNC_0(VAR_2, VAR_3, VAR_7, VAR_8,
            32, VAR_1, (const unsigned char*)&VAR_5, 1);

   return 1;
}
