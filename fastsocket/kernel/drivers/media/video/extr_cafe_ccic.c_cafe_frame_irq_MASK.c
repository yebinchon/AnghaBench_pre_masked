
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cafe_camera {unsigned int nbufs; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cafe_camera*,unsigned int) ;
 int FUNC_1 (struct cafe_camera*,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct cafe_camera *VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9;

 FUNC_1(VAR_7, VAR_6, VAR_1);





 for (VAR_9 = 0; VAR_9 < VAR_7->nbufs; VAR_9++)
  if (VAR_8 & (VAR_2 << VAR_9))
   FUNC_0(VAR_7, VAR_9);





 if (VAR_8 & (VAR_3 | VAR_4 | VAR_5))
  FUNC_2(VAR_0, &VAR_7->flags);
}
