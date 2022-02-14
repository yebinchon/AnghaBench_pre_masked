
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cafe_camera {int nbufs; int * dma_handles; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cafe_camera*,int ,int ) ;
 int FUNC_1 (struct cafe_camera*,int ,int ) ;
 int FUNC_2 (struct cafe_camera*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct cafe_camera *VAR_6)
{






 FUNC_2(VAR_6, VAR_3, VAR_6->dma_handles[0]);
 FUNC_2(VAR_6, VAR_4, VAR_6->dma_handles[1]);
 if (VAR_6->nbufs > 2) {
  FUNC_2(VAR_6, VAR_5, VAR_6->dma_handles[2]);
  FUNC_0(VAR_6, VAR_1, VAR_0);
 }
 else
  FUNC_1(VAR_6, VAR_1, VAR_0);
 FUNC_2(VAR_6, VAR_2, 0);
}
