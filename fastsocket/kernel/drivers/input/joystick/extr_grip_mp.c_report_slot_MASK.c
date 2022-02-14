
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grip_port {int buttons; scalar_t__ dirty; int dev; int yaxes; int xaxes; } ;
struct grip_mp {struct grip_port** port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct grip_mp *VAR_3, int VAR_4)
{
 struct grip_port *VAR_5 = VAR_3->port[VAR_4];
 int VAR_6;



 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  FUNC_1(VAR_5->dev, VAR_2[VAR_6], (VAR_5->buttons >> VAR_6) & 1);



 FUNC_0(VAR_5->dev, VAR_0, VAR_5->xaxes);
 FUNC_0(VAR_5->dev, VAR_1, VAR_5->yaxes);



 FUNC_2(VAR_5->dev);

 VAR_5->dirty = 0;
}
