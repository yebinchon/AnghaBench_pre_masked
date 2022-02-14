
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct channel_obj {int dummy; } ;
struct TYPE_4__ {scalar_t__ min_numbuffers; scalar_t__* min_bufsize; int* numbuffers; scalar_t__* channel_bufsize; } ;
struct TYPE_3__ {int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 TYPE_1__ VAR_11 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0, VAR_16, VAR_17;


 if ((VAR_7 > 0) &&
     (VAR_7 < VAR_10.min_numbuffers))
  VAR_7 = VAR_10.min_numbuffers;
 if ((VAR_9 > 0) &&
     (VAR_9 < VAR_10.min_numbuffers))
  VAR_9 = VAR_10.min_numbuffers;



 if (VAR_6 < VAR_10.min_bufsize[VAR_2])
  VAR_6 =
      VAR_10.min_bufsize[VAR_2];
 if (VAR_8 < VAR_10.min_bufsize[VAR_3])
  VAR_8 =
      VAR_10.min_bufsize[VAR_3];

 VAR_10.numbuffers[VAR_2] = VAR_7;

 if (VAR_7) {
  VAR_10.channel_bufsize[VAR_2] =
       VAR_6;
 }
 VAR_10.numbuffers[VAR_3] = VAR_9;

 if (VAR_9) {
  VAR_10.channel_bufsize[VAR_3] =
       VAR_8;
 }


 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  VAR_11.dev[VAR_16] =
      FUNC_1(sizeof(struct channel_obj), VAR_1);

  if (!VAR_11.dev[VAR_16]) {
   VAR_12 = VAR_16;
   VAR_15 = -VAR_0;
   goto vpif_init_free_channel_objects;
  }
 }

 VAR_12 = VAR_4;
 VAR_13 = VAR_5;
 VAR_14 = VAR_10.numbuffers[VAR_16 - 1];

 return 0;

vpif_init_free_channel_objects:
 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++)
  FUNC_0(VAR_11.dev[VAR_17]);
 return VAR_15;
}
