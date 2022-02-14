
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct flow_divert_pcb {int so; scalar_t__ hash; struct flow_divert_group* group; } ;
struct flow_divert_group {int lck; int pcb_tree; } ;
typedef int key ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,char*,size_t) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (struct flow_divert_pcb*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct flow_divert_pcb* FUNC_3 (int ,int *,struct flow_divert_pcb*) ;
 struct flow_divert_pcb* FUNC_4 (int ,int *,struct flow_divert_pcb*) ;
 size_t FUNC_5 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct flow_divert_group** VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (size_t*,int,size_t) ;
 int VAR_9 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static errno_t
FUNC_12(struct flow_divert_pcb *VAR_10, uint32_t VAR_11)
{
 errno_t VAR_12 = 0;
 struct flow_divert_pcb *VAR_13 = ((void*)0);
 struct flow_divert_group *VAR_14;
 static uint32_t VAR_15 = 1;
 static uint32_t VAR_16 = 0;
 int VAR_17 = 0;

 if (VAR_11 == 0 || VAR_11 >= VAR_3) {
  return VAR_1;
 }

 FUNC_11(VAR_10->so, 0);
 FUNC_8(&VAR_7);

 if (VAR_8 == ((void*)0) || VAR_6 == 0) {
  FUNC_1(VAR_4, &VAR_9, "No active groups, flow divert cannot be used for this socket");
  VAR_12 = VAR_2;
  goto done;
 }

 VAR_14 = VAR_8[VAR_11];
 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_4, &VAR_9, "Group for control unit %u is NULL, flow divert cannot be used for this socket", VAR_11);
  VAR_12 = VAR_2;
  goto done;
 }

 FUNC_10(VAR_10->so, 0);

 do {
  uint32_t VAR_18[2];
  uint32_t VAR_19;

  VAR_18[0] = VAR_15++;
  VAR_18[1] = FUNC_5();

  if (VAR_16 == 0) {
   VAR_16 = FUNC_5();
  }

  VAR_10->hash = FUNC_9(VAR_18, sizeof(VAR_18), VAR_16);

  for (VAR_19 = 1; VAR_19 < VAR_3; VAR_19++) {
   struct flow_divert_group *VAR_20 = VAR_8[VAR_19];
   if (VAR_20 != ((void*)0) && VAR_20 != VAR_14) {
    FUNC_8(&VAR_20->lck);
    VAR_13 = FUNC_3(VAR_5, &VAR_20->pcb_tree, VAR_10);
    FUNC_6(&VAR_20->lck);
    if (VAR_13 != ((void*)0)) {
     break;
    }
   }
  }

  if (VAR_13 == ((void*)0)) {
   FUNC_7(&VAR_14->lck);
   VAR_13 = FUNC_4(VAR_5, &VAR_14->pcb_tree, VAR_10);
   FUNC_6(&VAR_14->lck);
  }
 } while (VAR_13 != ((void*)0) && VAR_17++ < 3);

 if (VAR_13 == ((void*)0)) {
  VAR_10->group = VAR_14;
  FUNC_2(VAR_10);
 } else {
  VAR_10->hash = 0;
  VAR_12 = VAR_0;
 }

 FUNC_11(VAR_10->so, 0);

done:
 FUNC_6(&VAR_7);
 FUNC_10(VAR_10->so, 0);

 return VAR_12;
}
