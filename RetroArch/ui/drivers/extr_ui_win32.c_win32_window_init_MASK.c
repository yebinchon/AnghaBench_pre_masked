
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cbSize; int style; char const* lpszClassName; scalar_t__ hbrBackground; scalar_t__ hIconSm; int hIcon; int hCursor; int hInstance; } ;
typedef TYPE_1__ WNDCLASSEX ;
typedef scalar_t__ HICON ;
typedef scalar_t__ HBRUSH ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int,int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 char const* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

bool FUNC_10(WNDCLASSEX *VAR_10,
      bool VAR_11, const char *VAR_12)
{




   VAR_10->cbSize = sizeof(WNDCLASSEX);
   VAR_10->style = VAR_2 | VAR_4 | VAR_3;
   VAR_10->hInstance = FUNC_0(((void*)0));
   VAR_10->hCursor = FUNC_1(((void*)0), VAR_5);
   VAR_10->lpszClassName = (VAR_12 != ((void*)0)) ? VAR_12 : FUNC_8(VAR_9);
   VAR_10->hIcon = FUNC_2(FUNC_0(((void*)0)), FUNC_4(VAR_6));
   VAR_10->hIconSm = (HICON)FUNC_3(FUNC_0(((void*)0)),
         FUNC_4(VAR_6), VAR_7, 16, 16, 0);
   if (!VAR_11)
      VAR_10->hbrBackground = (HBRUSH)VAR_0;

   if (VAR_12 != ((void*)0))
      VAR_10->style |= VAR_1;

   if (!FUNC_5(VAR_10))
      return 0;

   return 1;
}
