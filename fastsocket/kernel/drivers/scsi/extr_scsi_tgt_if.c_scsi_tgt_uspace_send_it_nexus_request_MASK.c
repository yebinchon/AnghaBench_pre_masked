
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int host_no; int function; int initiator_id; scalar_t__ itn_id; } ;
struct TYPE_3__ {TYPE_2__ it_nexus_req; } ;
struct tgt_event {TYPE_1__ p; } ;
typedef int ev ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,unsigned long long) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct tgt_event*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,struct tgt_event*) ;

int FUNC_5(int VAR_1, u64 VAR_2,
       int VAR_3, char *VAR_4)
{
 struct tgt_event VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.p.it_nexus_req.host_no = VAR_1;
 VAR_5.p.it_nexus_req.function = VAR_3;
 VAR_5.p.it_nexus_req.itn_id = VAR_2;
 if (VAR_4)
  FUNC_3(VAR_5.p.it_nexus_req.initiator_id, VAR_4,
   sizeof(VAR_5.p.it_nexus_req.initiator_id));

 FUNC_0("%d %x %llx\n", VAR_1, VAR_3, (unsigned long long)VAR_2);

 VAR_6 = FUNC_4(VAR_0, &VAR_5);
 if (VAR_6)
  FUNC_1("tx buf is full, could not send\n");

 return VAR_6;
}
