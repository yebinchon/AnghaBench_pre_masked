
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vImage_Error ;
struct TYPE_4__ {int width; int height; int rowBytes; void* data; } ;
typedef TYPE_1__ vImage_Buffer ;
typedef int uint8_t ;
typedef size_t uint32_t ;


 int FUNC_0 (int) ;
 size_t* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*,int *,int ) ;

int FUNC_4(int VAR_6, char * VAR_7[])
{
    vImage_Buffer VAR_8;
    vImage_Buffer VAR_9;
    vImage_Error VAR_10;
    uint32_t VAR_11, VAR_12;
    uint8_t VAR_13;

    VAR_8.width = VAR_3 * 2;
    VAR_8.height = VAR_2 * 2 * VAR_1;
    VAR_8.rowBytes = VAR_8.width * sizeof(uint32_t);
    VAR_8.data = FUNC_1(VAR_8.height * VAR_8.rowBytes);

    VAR_9.width = 1.5 * VAR_8.width;
    VAR_9.height = 1.5 * VAR_8.height;
    VAR_9.rowBytes = VAR_9.width * sizeof(uint32_t);
    VAR_9.data = FUNC_1(VAR_9.height * VAR_9.rowBytes);

    for (VAR_11 = 0; VAR_11 < VAR_8.width * VAR_8.height; VAR_11++)
    {
     VAR_12 = VAR_0[VAR_11];
     VAR_12 = (0xFF000000 | (VAR_12 << 16) | (VAR_12 << 8) | VAR_12);
     ((uint32_t *)VAR_8.data)[VAR_11] = VAR_12;
    }

    VAR_10 = FUNC_3(&VAR_8, &VAR_9, ((void*)0), VAR_4);

    if (VAR_5 != VAR_10) FUNC_0(1);

    FUNC_2("const unsigned char gGearPict3x[9*kGearFrames*kGearWidth*kGearHeight] = {");

    for (VAR_11 = 0; VAR_11 < VAR_9.width * VAR_9.height; VAR_11++)
    {
     VAR_12 = ((uint32_t *)VAR_9.data)[VAR_11];
 VAR_13 = (0xFF & VAR_12);
     if (VAR_12 != (0xFF000000 | (VAR_13 << 16) | (VAR_13 << 8) | VAR_13)) FUNC_0(1);

  if (0 == (15 & VAR_11)) FUNC_2("\n    ");
 FUNC_2("0x%02x,", VAR_13);
    }
    FUNC_2("\n};\n");

    FUNC_0(0);
}
