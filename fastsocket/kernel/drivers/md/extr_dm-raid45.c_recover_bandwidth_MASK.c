
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int io_size; int bandwidth_work; scalar_t__ io_count; } ;
struct TYPE_3__ {int io_size; } ;
struct raid_set {scalar_t__ stats; TYPE_2__ recover; TYPE_1__ set; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct raid_set*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct raid_set*) ;

__attribute__((used)) static int FUNC_4(struct raid_set *VAR_4)
{
 int VAR_5, VAR_6;


 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 || FUNC_0(VAR_4))
  goto out;

 VAR_6 = FUNC_2(VAR_4->recover.io_count + VAR_1);
 if (VAR_6) {

  int VAR_7 = FUNC_2(VAR_4->recover.io_count + VAR_0) *
       VAR_4->recover.io_size / VAR_4->set.io_size;





  if (VAR_7 > VAR_6 / VAR_4->recover.bandwidth_work) {

   FUNC_1(VAR_4->stats + VAR_3);
   return 0;
  }
 }

out:
 FUNC_1(VAR_4->stats + VAR_2);
 return 1;
}
