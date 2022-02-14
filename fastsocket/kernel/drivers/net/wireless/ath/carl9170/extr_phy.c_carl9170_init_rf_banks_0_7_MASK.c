
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ar9170 {TYPE_1__* hw; } ;
struct TYPE_5__ {int _2ghz; int _5ghz; int reg; } ;
struct TYPE_4__ {int wiphy; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct ar9170 *VAR_1, bool VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_2(VAR_1);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  FUNC_1(VAR_0[VAR_4].reg,
      VAR_2 ? VAR_0[VAR_4]._5ghz
        : VAR_0[VAR_4]._2ghz);

 FUNC_3();
 VAR_3 = FUNC_4();
 if (VAR_3)
  FUNC_5(VAR_1->hw->wiphy, "rf init failed\n");

 return VAR_3;
}
