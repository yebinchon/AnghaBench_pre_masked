
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tgt_ring {int tr_lock; int tr_idx; } ;
struct TYPE_2__ {int status; int type; } ;
struct tgt_event {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct tgt_event*,struct tgt_event*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct tgt_event* FUNC_5 (struct tgt_ring*,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct tgt_ring*) ;
 struct tgt_ring VAR_2 ;
 int FUNC_7 (struct tgt_event*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(u32 VAR_3, struct tgt_event *VAR_4)
{
 struct tgt_event *VAR_5;
 struct tgt_ring *VAR_6 = &VAR_2;
 unsigned long VAR_7;
 int VAR_8 = 0;

 FUNC_3(&VAR_6->tr_lock, VAR_7);

 VAR_5 = FUNC_5(VAR_6, VAR_6->tr_idx);
 if (!VAR_5->hdr.status)
  FUNC_6(VAR_6);
 else
  VAR_8 = -VAR_0;

 FUNC_4(&VAR_6->tr_lock, VAR_7);

 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_5, VAR_4, sizeof(*VAR_5));
 VAR_5->hdr.type = VAR_3;
 FUNC_1();
 VAR_5->hdr.status = 1;

 FUNC_0(FUNC_7(VAR_5));

 FUNC_8(&VAR_1);

 return 0;
}
