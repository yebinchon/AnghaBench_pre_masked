
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tgt_ring {int tr_idx; int tr_lock; } ;
struct TYPE_2__ {scalar_t__ status; } ;
struct tgt_event {TYPE_1__ hdr; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct tgt_event* FUNC_3 (struct tgt_ring*,int) ;
 int VAR_3 ;
 struct tgt_ring VAR_4 ;

__attribute__((used)) static unsigned int FUNC_4(struct file * VAR_5, struct poll_table_struct *VAR_6)
{
 struct tgt_event *VAR_7;
 struct tgt_ring *VAR_8 = &VAR_4;
 unsigned long VAR_9;
 unsigned int VAR_10 = 0;
 u32 VAR_11;

 FUNC_0(VAR_5, &VAR_3, VAR_6);

 FUNC_1(&VAR_8->tr_lock, VAR_9);

 VAR_11 = VAR_8->tr_idx ? VAR_8->tr_idx - 1 : VAR_2 - 1;
 VAR_7 = FUNC_3(VAR_8, VAR_11);
 if (VAR_7->hdr.status)
  VAR_10 |= VAR_0 | VAR_1;

 FUNC_2(&VAR_8->tr_lock, VAR_9);

 return VAR_10;
}
