
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_submit {int logical_offset_in_bio; scalar_t__ boundary; struct bio* bio; int (* submit_io ) (scalar_t__,struct bio*,int ,int ) ;} ;
struct dio {scalar_t__ rw; int inode; scalar_t__ is_async; int bio_lock; int refcount; } ;
struct bio {struct dio* bi_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__,struct bio*,int ,int ) ;
 int FUNC_4 (scalar_t__,struct bio*) ;

__attribute__((used)) static inline void FUNC_5(struct dio *VAR_1, struct dio_submit *VAR_2)
{
 struct bio *VAR_3 = VAR_2->bio;
 unsigned long VAR_4;

 VAR_3->bi_private = VAR_1;

 FUNC_1(&VAR_1->bio_lock, VAR_4);
 VAR_1->refcount++;
 FUNC_2(&VAR_1->bio_lock, VAR_4);

 if (VAR_1->is_async && VAR_1->rw == VAR_0)
  FUNC_0(VAR_3);

 if (VAR_2->submit_io)
  VAR_2->submit_io(VAR_1->rw, VAR_3, VAR_1->inode,
          VAR_2->logical_offset_in_bio);
 else
  FUNC_4(VAR_1->rw, VAR_3);

 VAR_2->bio = ((void*)0);
 VAR_2->boundary = 0;
 VAR_2->logical_offset_in_bio = 0;
}
