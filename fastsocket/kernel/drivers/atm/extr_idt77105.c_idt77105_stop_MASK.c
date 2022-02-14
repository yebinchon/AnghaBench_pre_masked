
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idt77105_priv {struct idt77105_priv* next; struct atm_dev* dev; } ;
struct atm_dev {int * dev_data; int * phy; int number; int type; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 struct idt77105_priv* VAR_2 ;
 int FUNC_3 (struct idt77105_priv*) ;

__attribute__((used)) static int FUNC_4(struct atm_dev *VAR_3)
{
 struct idt77105_priv *VAR_4, *VAR_5;

        FUNC_0("%s(itf %d): stopping IDT77105\n",VAR_3->type,VAR_3->number);


 FUNC_2( FUNC_1(VAR_1) & ~VAR_0, VAR_1 );


 for (VAR_5 = ((void*)0), VAR_4 = VAR_2 ;
             VAR_4 != ((void*)0);
             VAR_5 = VAR_4, VAR_4 = VAR_4->next) {
            if (VAR_4->dev == VAR_3) {
                if (VAR_5 != ((void*)0))
                    VAR_5->next = VAR_4->next;
                else
                    VAR_2 = VAR_4->next;
         VAR_3->phy = ((void*)0);
                VAR_3->dev_data = ((void*)0);
                FUNC_3(VAR_4);
                break;
            }
        }

 return 0;
}
