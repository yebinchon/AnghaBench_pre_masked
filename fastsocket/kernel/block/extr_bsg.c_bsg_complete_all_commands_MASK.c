
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_device {int lock; int queued_cmds; int name; } ;
struct bsg_command {int bidi_bio; int bio; int hdr; int rq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bsg_command*) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (struct bsg_command*) ;
 struct bsg_command* FUNC_3 (struct bsg_device*) ;
 int FUNC_4 (struct bsg_device*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct bsg_device *VAR_1)
{
 struct bsg_command *VAR_2;
 int VAR_3, VAR_4;

 FUNC_5("%s: entered\n", VAR_1->name);




 VAR_3 = 0;
 do {
  VAR_3 = FUNC_4(VAR_1);







 } while (VAR_3 != -VAR_0);




 VAR_3 = 0;
 do {
  FUNC_6(&VAR_1->lock);
  if (!VAR_1->queued_cmds) {
   FUNC_7(&VAR_1->lock);
   break;
  }
  FUNC_7(&VAR_1->lock);

  VAR_2 = FUNC_3(VAR_1);
  if (FUNC_0(VAR_2))
   break;

  VAR_4 = FUNC_1(VAR_2->rq, &VAR_2->hdr, VAR_2->bio,
      VAR_2->bidi_bio);
  if (!VAR_3)
   VAR_3 = VAR_4;

  FUNC_2(VAR_2);
 } while (1);

 return VAR_3;
}
