
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct queue {int dummy; } ;
struct fs_dev {int dummy; } ;
struct FS_QENTRY {void* p2; void* p1; void* p0; void* cmd; } ;
struct TYPE_2__ {void* p2; void* p1; void* p0; void* cmd; } ;


 struct FS_QENTRY* FUNC_0 (struct fs_dev*,struct queue*) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct fs_dev*,struct queue*,struct FS_QENTRY*) ;

__attribute__((used)) static void FUNC_2 (struct fs_dev *VAR_2, struct queue *VAR_3,
     u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct FS_QENTRY *VAR_8;

 VAR_8 = FUNC_0 (VAR_2, VAR_3);
 VAR_8->cmd = VAR_4;
 VAR_8->p0 = VAR_5;
 VAR_8->p1 = VAR_6;
 VAR_8->p2 = VAR_7;
 FUNC_1 (VAR_2, VAR_3, VAR_8);
}
