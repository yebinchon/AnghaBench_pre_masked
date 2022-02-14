
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_channel {int ccwdev; TYPE_1__* ccws; struct lcs_buffer* iob; } ;
struct lcs_buffer {scalar_t__ state; int count; } ;
struct TYPE_2__ {int count; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (struct lcs_channel*,int) ;
 int FUNC_3 (struct lcs_channel*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(struct lcs_channel *VAR_4, struct lcs_buffer *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8;

 FUNC_1(5, VAR_3, "rdybuff");
 FUNC_0(VAR_5->state != VAR_0 &&
        VAR_5->state != VAR_1);
 FUNC_5(FUNC_4(VAR_4->ccwdev), VAR_6);
 VAR_5->state = VAR_2;
 VAR_7 = VAR_5 - VAR_4->iob;

 VAR_4->ccws[VAR_7].count = VAR_5->count;

 FUNC_2(VAR_4, VAR_7);
 VAR_8 = FUNC_3(VAR_4);
 FUNC_6(FUNC_4(VAR_4->ccwdev), VAR_6);
 return VAR_8;
}
