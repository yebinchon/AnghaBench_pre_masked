
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {scalar_t__ gendisk; int eeh_state; } ;
struct rsxx_bio_meta {int error; int bio; int start_time; int pending_dmas; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct rsxx_cardinfo*,int ,int ) ;
 int FUNC_5 (int ,struct rsxx_bio_meta*) ;

__attribute__((used)) static void FUNC_6(struct rsxx_cardinfo *VAR_2,
       void *VAR_3,
       unsigned int VAR_4)
{
 struct rsxx_bio_meta *VAR_5 = VAR_3;

 if (VAR_4)
  FUNC_2(&VAR_5->error, 1);

 if (FUNC_0(&VAR_5->pending_dmas)) {
  if (!VAR_2->eeh_state && VAR_2->gendisk)
   FUNC_4(VAR_2, VAR_5->bio, VAR_5->start_time);

  FUNC_3(VAR_5->bio, FUNC_1(&VAR_5->error) ? -VAR_0 : 0);
  FUNC_5(VAR_1, VAR_5);
 }
}
