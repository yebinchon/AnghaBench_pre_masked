
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* cpu_mtypes; } ;
typedef TYPE_1__ mtypes_cpu_t ;
typedef int mtc ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {scalar_t__* m_mtypes; } ;
struct TYPE_6__ {TYPE_1__* mbs_cpu; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__**,scalar_t__**,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(boolean_t VAR_6)
{
 int VAR_7, VAR_8;
 mtypes_cpu_t VAR_9;

 if (VAR_6)
  FUNC_0(VAR_3, VAR_0);

 FUNC_2(&VAR_9, sizeof (VAR_9));
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  mtypes_cpu_t *VAR_10 = &VAR_4->mbs_cpu[VAR_7];
  mtypes_cpu_t VAR_11;

  FUNC_1(&VAR_10->cpu_mtypes, &VAR_11.cpu_mtypes,
      sizeof (VAR_11.cpu_mtypes));

  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
   VAR_9.cpu_mtypes[VAR_8] += VAR_11.cpu_mtypes[VAR_8];
 }
 if (!VAR_6)
  FUNC_3(VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_2.m_mtypes[VAR_8] = VAR_9.cpu_mtypes[VAR_8];
 if (!VAR_6)
  FUNC_4(VAR_3);
}
