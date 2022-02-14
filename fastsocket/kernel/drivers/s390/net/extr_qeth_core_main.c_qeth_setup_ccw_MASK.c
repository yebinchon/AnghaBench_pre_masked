
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* cda; void* count; } ;
struct qeth_channel {TYPE_1__ ccw; int ccwdev; } ;
struct qeth_card {struct qeth_channel read; } ;
struct ccw1 {int dummy; } ;
typedef void* __u32 ;


 struct qeth_card* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct qeth_channel *VAR_3, unsigned char *VAR_4,
  __u32 VAR_5)
{
 struct qeth_card *VAR_6;

 FUNC_1(VAR_1, 4, "setupccw");
 VAR_6 = FUNC_0(VAR_3->ccwdev);
 if (VAR_3 == &VAR_6->read)
  FUNC_3(&VAR_3->ccw, VAR_0, sizeof(struct ccw1));
 else
  FUNC_3(&VAR_3->ccw, VAR_2, sizeof(struct ccw1));
 VAR_3->ccw.count = VAR_5;
 VAR_3->ccw.cda = (__u32) FUNC_2(VAR_4);
}
