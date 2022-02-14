
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bih ;
struct TYPE_4__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
typedef int * HBITMAP ;
typedef TYPE_1__ BITMAPINFOHEADER ;
typedef int BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,TYPE_1__*,int ,void*,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_3 ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (void*,char const*,int ,int,int) ;

__attribute__((used)) static HBITMAP FUNC_8(const char *VAR_4, int VAR_5)
{
  BITMAPINFOHEADER VAR_6;
  HBITMAP VAR_7;
  void *VAR_8;
  int VAR_9;

  VAR_8 = FUNC_3(1, VAR_5 ? 480*240*3 : 320*240*3);
  if (VAR_8 == ((void*)0)) return ((void*)0);
  VAR_9 = FUNC_7(VAR_8, VAR_4, VAR_3, VAR_5 ? 480 : 320, 240);
  if (VAR_9 != 0) {
    FUNC_4(VAR_8);
    return ((void*)0);
  }

  FUNC_6(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.biSize = sizeof(VAR_6);
  VAR_6.biWidth = VAR_5 ? 480 : 320;
  VAR_6.biHeight = -240;
  VAR_6.biPlanes = 1;
  VAR_6.biBitCount = 24;
  VAR_6.biCompression = VAR_0;
  VAR_7 = FUNC_0(FUNC_1(VAR_2), &VAR_6, VAR_1, VAR_8, (BITMAPINFO *)&VAR_6, 0);
  if (VAR_7 == ((void*)0))
    FUNC_5("CreateDIBitmap failed with %i", FUNC_2());

  FUNC_4(VAR_8);
  return VAR_7;
}
