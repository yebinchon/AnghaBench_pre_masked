
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_const_structrp ;
typedef scalar_t__* png_charp ;
typedef int png_byte ;


 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (scalar_t__*,char**,int ) ;

__attribute__((used)) static png_byte
FUNC_2(png_const_structrp VAR_0, png_charp VAR_1, unsigned int VAR_2)
{
   char *VAR_3 = ((void*)0);
   unsigned long int VAR_4 = FUNC_1(VAR_1, &VAR_3, 0 );

   if (VAR_1[0] && *VAR_3 == 0 && VAR_4 <= VAR_2)
      return (png_byte)VAR_4;

   else
      FUNC_0(VAR_0, "sBIT: invalid sBIT value");
}
