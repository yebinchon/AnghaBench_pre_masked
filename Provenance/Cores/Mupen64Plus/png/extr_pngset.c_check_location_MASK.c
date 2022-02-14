
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* png_const_structrp ;
typedef int png_byte ;
struct TYPE_5__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static png_byte
FUNC_2(png_const_structrp VAR_4, int VAR_5)
{
   VAR_5 &= (VAR_1|VAR_2|VAR_0);





   if (VAR_5 == 0 && (VAR_4->mode & VAR_3) == 0)
   {

      FUNC_0(VAR_4,
          "png_set_unknown_chunks now expects a valid location");

      VAR_5 = (png_byte)(VAR_4->mode &
          (VAR_1|VAR_2|VAR_0));
   }




   if (VAR_5 == 0)
      FUNC_1(VAR_4, "invalid location in png_set_unknown_chunks");




   while (VAR_5 != (VAR_5 & -VAR_5))
      VAR_5 &= ~(VAR_5 & -VAR_5);




   return (png_byte)VAR_5;
}
