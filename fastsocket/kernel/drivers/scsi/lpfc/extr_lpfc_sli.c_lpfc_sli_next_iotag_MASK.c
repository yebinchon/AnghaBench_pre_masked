
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct lpfc_sli {size_t last_iotag; size_t iocbq_lookup_len; struct lpfc_iocbq** iocbq_lookup; } ;
struct lpfc_iocbq {size_t iotag; } ;
struct lpfc_hba {int hbalock; struct lpfc_sli sli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_iocbq**) ;
 struct lpfc_iocbq** FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,size_t) ;
 int FUNC_3 (struct lpfc_iocbq**,struct lpfc_iocbq**,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

uint16_t
FUNC_6(struct lpfc_hba *VAR_4, struct lpfc_iocbq *VAR_5)
{
 struct lpfc_iocbq **VAR_6;
 struct lpfc_iocbq **VAR_7;
 size_t VAR_8;
 struct lpfc_sli *VAR_9 = &VAR_4->sli;
 uint16_t VAR_10;

 FUNC_4(&VAR_4->hbalock);
 VAR_10 = VAR_9->last_iotag;
 if(++VAR_10 < VAR_9->iocbq_lookup_len) {
  VAR_9->last_iotag = VAR_10;
  VAR_9->iocbq_lookup[VAR_10] = VAR_5;
  FUNC_5(&VAR_4->hbalock);
  VAR_5->iotag = VAR_10;
  return VAR_10;
 } else if (VAR_9->iocbq_lookup_len < (0xffff
        - VAR_3)) {
  VAR_8 = VAR_9->iocbq_lookup_len + VAR_3;
  FUNC_5(&VAR_4->hbalock);
  VAR_6 = FUNC_1(VAR_8 * sizeof (struct lpfc_iocbq *),
      VAR_0);
  if (VAR_6) {
   FUNC_4(&VAR_4->hbalock);
   VAR_7 = VAR_9->iocbq_lookup;
   if (VAR_8 <= VAR_9->iocbq_lookup_len) {

    FUNC_0(VAR_6);
    VAR_10 = VAR_9->last_iotag;
    if(++VAR_10 < VAR_9->iocbq_lookup_len) {
     VAR_9->last_iotag = VAR_10;
     VAR_9->iocbq_lookup[VAR_10] = VAR_5;
     FUNC_5(&VAR_4->hbalock);
     VAR_5->iotag = VAR_10;
     return VAR_10;
    }
    FUNC_5(&VAR_4->hbalock);
    return 0;
   }
   if (VAR_9->iocbq_lookup)
    FUNC_3(VAR_6, VAR_7,
           ((VAR_9->last_iotag + 1) *
     sizeof (struct lpfc_iocbq *)));
   VAR_9->iocbq_lookup = VAR_6;
   VAR_9->iocbq_lookup_len = VAR_8;
   VAR_9->last_iotag = VAR_10;
   VAR_9->iocbq_lookup[VAR_10] = VAR_5;
   FUNC_5(&VAR_4->hbalock);
   VAR_5->iotag = VAR_10;
   FUNC_0(VAR_7);
   return VAR_10;
  }
 } else
  FUNC_5(&VAR_4->hbalock);

 FUNC_2(VAR_4, VAR_1, VAR_2,
   "0318 Failed to allocate IOTAG.last IOTAG is %d\n",
   VAR_9->last_iotag);

 return 0;
}
