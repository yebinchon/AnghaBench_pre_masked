
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maxreqs; } ;
struct nfsd4_session {int * se_slots; TYPE_1__ se_fchannel; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct nfsd4_session *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->se_fchannel.maxreqs; VAR_1++)
  FUNC_0(VAR_0->se_slots[VAR_1]);
}
