
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct monwrite_hdr {int datalen; scalar_t__ mon_function; int hdrlen; } ;
struct mon_private {struct mon_buf* current_buf; int list; struct monwrite_hdr hdr; } ;
struct mon_buf {int list; struct monwrite_hdr hdr; struct mon_buf* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct mon_buf*) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (struct monwrite_hdr*,struct mon_buf*,int ) ;
 struct mon_buf* FUNC_5 (struct mon_private*,struct monwrite_hdr*) ;

__attribute__((used)) static int FUNC_6(struct mon_private *VAR_12)
{
 struct monwrite_hdr *VAR_13 = &VAR_12->hdr;
 struct mon_buf *VAR_14;
 int VAR_15;

 if (VAR_13->datalen > VAR_7 ||
     VAR_13->mon_function > VAR_8 ||
     VAR_13->hdrlen != sizeof(struct monwrite_hdr))
  return -VAR_1;
 VAR_14 = ((void*)0);
 if (VAR_13->mon_function != VAR_6)
  VAR_14 = FUNC_5(VAR_12, VAR_13);
 if (VAR_14) {
  if (VAR_13->mon_function == VAR_9) {
   VAR_13->datalen = VAR_14->hdr.datalen;
   VAR_15 = FUNC_4(VAR_13, VAR_14->data,
        VAR_0);
   FUNC_3(&VAR_14->list);
   VAR_10--;
   FUNC_0(VAR_14->data);
   FUNC_0(VAR_14);
   VAR_14 = ((void*)0);
  }
 } else if (VAR_13->mon_function != VAR_9) {
  if (VAR_10 >= VAR_11)
   return -VAR_3;
  VAR_14 = FUNC_1(sizeof(struct mon_buf), VAR_5);
  if (!VAR_14)
   return -VAR_2;
  VAR_14->data = FUNC_1(VAR_13->datalen,
           VAR_5 | VAR_4);
  if (!VAR_14->data) {
   FUNC_0(VAR_14);
   return -VAR_2;
  }
  VAR_14->hdr = *VAR_13;
  FUNC_2(&VAR_14->list, &VAR_12->list);
  if (VAR_13->mon_function != VAR_6)
   VAR_10++;
 }
 VAR_12->current_buf = VAR_14;
 return 0;
}
