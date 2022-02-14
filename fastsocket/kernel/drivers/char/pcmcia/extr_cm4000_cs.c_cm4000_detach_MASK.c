
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct cm4000_dev* priv; } ;
struct cm4000_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int VAR_1 ;
 struct pcmcia_device** VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct cm4000_dev*) ;
 int VAR_3 ;
 int FUNC_4 (struct cm4000_dev*) ;

__attribute__((used)) static void FUNC_5(struct pcmcia_device *VAR_4)
{
 struct cm4000_dev *VAR_5 = VAR_4->priv;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_2[VAR_6] == VAR_4)
   break;
 if (VAR_6 == VAR_0)
  return;

 FUNC_4(VAR_5);

 FUNC_1(VAR_4);

 VAR_2[VAR_6] = ((void*)0);
 FUNC_3(VAR_5);

 FUNC_2(VAR_1, FUNC_0(VAR_3, VAR_6));

 return;
}
