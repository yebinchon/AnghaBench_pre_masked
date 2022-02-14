
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_info_t ;
typedef int d3dpp ;
struct TYPE_3__ {int cur_mon_id; int dev; } ;
typedef TYPE_1__ d3d9_video_t ;
typedef scalar_t__ LPDIRECT3D9 ;
typedef int * HWND ;
typedef int D3DPRESENT_PARAMETERS ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int *,scalar_t__,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int const*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *,int ,int) ;
 int * FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(void *VAR_1, const video_info_t *VAR_2)
{
   D3DPRESENT_PARAMETERS VAR_3;
   HWND VAR_4 = ((void*)0);
   d3d9_video_t *VAR_5 = (d3d9_video_t*)VAR_1;


   VAR_4 = FUNC_5();


   FUNC_4(&VAR_3, 0, sizeof(VAR_3));

   VAR_0 = (LPDIRECT3D9)FUNC_1();


   FUNC_3(VAR_5, VAR_2, &VAR_3);

   if (!VAR_0)
   {
      FUNC_0("[D3D9]: Failed to create D3D interface.\n");
      return 0;
   }

   if (!FUNC_2(&VAR_5->dev, &VAR_3,
            VAR_0,
            VAR_4,
            VAR_5->cur_mon_id)
      )
   {
      FUNC_0("[D3D9]: Failed to initialize device.\n");
      return 0;
   }

   return 1;
}
