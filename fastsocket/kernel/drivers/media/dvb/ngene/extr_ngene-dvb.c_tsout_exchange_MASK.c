
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ngene_channel {struct ngene* dev; } ;
struct TYPE_3__ {int queue; } ;
struct ngene {TYPE_1__ tsout_rbuf; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,void*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int *) ;

void *FUNC_5(void *VAR_1, void *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct ngene_channel *VAR_6 = VAR_1;
 struct ngene *VAR_7 = VAR_6->dev;
 u32 VAR_8;

 VAR_8 = FUNC_1(&VAR_7->tsout_rbuf);
 VAR_8 -= VAR_8 % 188;

 if (VAR_8 < VAR_3)
  FUNC_0(VAR_2 + VAR_8, VAR_3 - VAR_8, VAR_5);
 else
  VAR_8 = VAR_3;
 FUNC_2(&VAR_7->tsout_rbuf, VAR_2, VAR_8);
 if (VAR_5 & VAR_0)
  FUNC_3((u32 *)VAR_2, VAR_8);
 FUNC_4(&VAR_7->tsout_rbuf.queue);
 return VAR_2;
}
