
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_9__ {int size; int trans_id; int type; } ;
struct dm_balloon_response {int more_pages; int range_count; int * range_array; TYPE_3__ hdr; } ;
struct TYPE_7__ {int num_pages; } ;
struct TYPE_10__ {TYPE_2__* dev; int state; TYPE_1__ balloon_wrk; } ;
struct TYPE_8__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int,struct dm_balloon_response*,int,int*) ;
 int FUNC_1 (int *) ;
 TYPE_4__ VAR_5 ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,struct dm_balloon_response*,int,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_8)
{
 int VAR_9 = VAR_5.balloon_wrk.num_pages;
 int VAR_10 = 0;
 struct dm_balloon_response *VAR_11;
 int VAR_12;
 int VAR_13;
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 int VAR_16;






 VAR_12 = 512;

 while (!VAR_15) {
  VAR_11 = (struct dm_balloon_response *)VAR_6;
  FUNC_3(VAR_6, 0, VAR_3);
  VAR_11->hdr.type = VAR_0;
  VAR_11->hdr.size = sizeof(struct dm_balloon_response);
  VAR_11->more_pages = 1;


  VAR_9 -= VAR_10;
  VAR_10 = FUNC_0(&VAR_5, VAR_9,
      VAR_11, VAR_12,
       &VAR_14);

  if ((VAR_14) && (VAR_12 != 1)) {
   VAR_12 = 1;
   continue;
  }

  if ((VAR_14) || (VAR_10 == VAR_9)) {
   VAR_11->more_pages = 0;
   VAR_15 = 1;
   VAR_5.state = VAR_1;
  }







  do {
   VAR_11->hdr.trans_id = FUNC_1(&VAR_7);
   VAR_13 = FUNC_6(VAR_5.dev->channel,
      VAR_11,
      VAR_11->hdr.size,
      (unsigned long)((void*)0),
      VAR_4, 0);

   if (VAR_13 == -VAR_2)
    FUNC_4(20);

  } while (VAR_13 == -VAR_2);

  if (VAR_13) {



   FUNC_5("Balloon response failed\n");

   for (VAR_16 = 0; VAR_16 < VAR_11->range_count; VAR_16++)
    FUNC_2(&VAR_5,
       &VAR_11->range_array[VAR_16]);

   VAR_15 = 1;
  }
 }

}
