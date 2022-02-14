
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct hvc_struct {scalar_t__ vtermno; int data; int outbuf_size; char* outbuf; int index; int next; struct hv_ops const* ops; int lock; int tty_resize; int kref; } ;
struct hv_ops {int dummy; } ;


 size_t FUNC_0 (int,int) ;
 int VAR_0 ;
 struct hvc_struct* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 struct hv_ops const** VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 struct hvc_struct* FUNC_5 (int,int ) ;
 int VAR_8 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__* VAR_9 ;

struct hvc_struct *FUNC_10(uint32_t VAR_10, int VAR_11,
        const struct hv_ops *VAR_12,
        int VAR_13)
{
 struct hvc_struct *VAR_14;
 int VAR_15;


 if (!VAR_4) {
  int VAR_16 = FUNC_3();
  if (VAR_16)
   return FUNC_1(VAR_16);
 }

 VAR_14 = FUNC_5(FUNC_0(sizeof(*VAR_14), sizeof(long)) + VAR_13,
   VAR_1);
 if (!VAR_14)
  return FUNC_1(-VAR_0);

 VAR_14->vtermno = VAR_10;
 VAR_14->data = VAR_11;
 VAR_14->ops = VAR_12;
 VAR_14->outbuf_size = VAR_13;
 VAR_14->outbuf = &((char *)VAR_14)[FUNC_0(sizeof(*VAR_14), sizeof(long))];

 FUNC_4(&VAR_14->kref);

 FUNC_2(&VAR_14->tty_resize, VAR_5);
 FUNC_8(&VAR_14->lock);
 FUNC_7(&VAR_7);





 for (VAR_15=0; VAR_15 < VAR_2; VAR_15++)
  if (VAR_9[VAR_15] == VAR_14->vtermno &&
      VAR_3[VAR_15] == VAR_14->ops)
   break;


 if (VAR_15 >= VAR_2)
  VAR_15 = ++VAR_8;

 VAR_14->index = VAR_15;

 FUNC_6(&(VAR_14->next), &VAR_6);
 FUNC_9(&VAR_7);

 return VAR_14;
}
