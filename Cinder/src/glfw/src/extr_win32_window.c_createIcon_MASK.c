
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ii ;
typedef int bi ;
struct TYPE_8__ {unsigned char* pixels; int width; int height; } ;
struct TYPE_7__ {int bV5Size; int bV5Width; int bV5Height; int bV5Planes; int bV5BitCount; int bV5RedMask; int bV5GreenMask; int bV5BlueMask; int bV5AlphaMask; int xHotspot; int yHotspot; void* hbmColor; void* hbmMask; scalar_t__ fIcon; int bV5Compression; } ;
typedef TYPE_1__ ICONINFO ;
typedef int * HICON ;
typedef int HDC ;
typedef void* HBITMAP ;
typedef TYPE_2__ GLFWimage ;
typedef scalar_t__ GLFWbool ;
typedef int DWORD ;
typedef TYPE_1__ BITMAPV5HEADER ;
typedef int BITMAPINFO ;


 int VAR_0 ;
 void* FUNC_0 (int,int,int,int,int *) ;
 void* FUNC_1 (int ,int *,int ,void**,int *,int ) ;
 int * FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static HICON FUNC_8(const GLFWimage* VAR_3,
                        int VAR_4, int VAR_5, GLFWbool VAR_6)
{
    int VAR_7;
    HDC VAR_8;
    HICON VAR_9;
    HBITMAP VAR_10, VAR_11;
    BITMAPV5HEADER VAR_12;
    ICONINFO VAR_13;
    unsigned char* VAR_14 = ((void*)0);
    unsigned char* VAR_15 = VAR_3->pixels;

    FUNC_6(&VAR_12, sizeof(VAR_12));
    VAR_12.bV5Size = sizeof(BITMAPV5HEADER);
    VAR_12.bV5Width = VAR_3->width;
    VAR_12.bV5Height = -VAR_3->height;
    VAR_12.bV5Planes = 1;
    VAR_12.bV5BitCount = 32;
    VAR_12.bV5Compression = VAR_0;
    VAR_12.bV5RedMask = 0x00ff0000;
    VAR_12.bV5GreenMask = 0x0000ff00;
    VAR_12.bV5BlueMask = 0x000000ff;
    VAR_12.bV5AlphaMask = 0xff000000;

    VAR_8 = FUNC_4(((void*)0));
    VAR_10 = FUNC_1(VAR_8,
                             (BITMAPINFO*) &VAR_12,
                             VAR_1,
                             (void**) &VAR_14,
                             ((void*)0),
                             (DWORD) 0);
    FUNC_5(((void*)0), VAR_8);

    if (!VAR_10)
    {
        FUNC_7(VAR_2,
                        "Win32: Failed to create RGBA bitmap");
        return ((void*)0);
    }

    VAR_11 = FUNC_0(VAR_3->width, VAR_3->height, 1, 1, ((void*)0));
    if (!VAR_11)
    {
        FUNC_7(VAR_2,
                        "Win32: Failed to create mask bitmap");
        FUNC_3(VAR_10);
        return ((void*)0);
    }

    for (VAR_7 = 0; VAR_7 < VAR_3->width * VAR_3->height; VAR_7++)
    {
        VAR_14[0] = VAR_15[2];
        VAR_14[1] = VAR_15[1];
        VAR_14[2] = VAR_15[0];
        VAR_14[3] = VAR_15[3];
        VAR_14 += 4;
        VAR_15 += 4;
    }

    FUNC_6(&VAR_13, sizeof(VAR_13));
    VAR_13.fIcon = VAR_6;
    VAR_13.xHotspot = VAR_4;
    VAR_13.yHotspot = VAR_5;
    VAR_13.hbmMask = VAR_11;
    VAR_13.hbmColor = VAR_10;

    VAR_9 = FUNC_2(&VAR_13);

    FUNC_3(VAR_10);
    FUNC_3(VAR_11);

    if (!VAR_9)
    {
        if (VAR_6)
            FUNC_7(VAR_2, "Win32: Failed to create icon");
        else
            FUNC_7(VAR_2, "Win32: Failed to create cursor");
    }

    return VAR_9;
}
