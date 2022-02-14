
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t pgbuf; int buffer; } ;
typedef TYPE_1__ vtx_pagereq_t ;
typedef int vtx_pageinfo_t ;
struct TYPE_6__ {size_t numpages; int version_minor; int version_major; } ;
typedef TYPE_2__ vtx_info_t ;
struct saa5246a_device {int * pgbuf; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,char,int) ;
 long FUNC_2 (struct saa5246a_device*,size_t) ;
 long FUNC_3 (struct saa5246a_device*,TYPE_1__*) ;
 int FUNC_4 (struct saa5246a_device*,int *,size_t) ;
 long FUNC_5 (struct saa5246a_device*,TYPE_1__*) ;
 long FUNC_6 (struct saa5246a_device*,size_t) ;
 struct saa5246a_device* FUNC_7 (struct file*) ;

__attribute__((used)) static long FUNC_8(struct file *VAR_5, unsigned int VAR_6, void *VAR_7)
{
 struct saa5246a_device *VAR_8 = FUNC_7(VAR_5);

 switch(VAR_6)
 {
  case 136:
  {
   vtx_info_t *VAR_9 = VAR_7;

   VAR_9->version_major = VAR_2;
   VAR_9->version_minor = VAR_3;
   VAR_9->numpages = VAR_4;
   return 0;
  }

  case 137:
  {
   vtx_pagereq_t *VAR_10 = VAR_7;

   if (VAR_10->pgbuf < 0 || VAR_10->pgbuf >= VAR_4)
    return -VAR_1;
   FUNC_1(VAR_8->pgbuf[VAR_10->pgbuf], ' ', sizeof(VAR_8->pgbuf[0]));
   return 0;
  }

  case 138:
  {
   vtx_pagereq_t *VAR_11 = VAR_7;

   if (VAR_11->pgbuf < 0 || VAR_11->pgbuf >= VAR_4)
    return -VAR_1;
   return(FUNC_2(VAR_8, VAR_11->pgbuf));
  }

  case 133:
  {
   vtx_pagereq_t *VAR_12 = VAR_7;

   return(FUNC_5(VAR_8, VAR_12));
  }

  case 134:
  {
   vtx_pagereq_t *VAR_13 = VAR_7;
   vtx_pageinfo_t VAR_14;
   int VAR_15;

   if ((VAR_15 = FUNC_4(VAR_8, &VAR_14, VAR_13->pgbuf)))
    return VAR_15;
   if(FUNC_0(VAR_13->buffer, &VAR_14,
    sizeof(vtx_pageinfo_t)))
    return -VAR_0;
   return 0;
  }

  case 135:
  {
   vtx_pagereq_t *VAR_16 = VAR_7;

   return(FUNC_3(VAR_8, VAR_16));
  }

  case 128:
  {
   vtx_pagereq_t *VAR_17 = VAR_7;

   return(FUNC_6(VAR_8, VAR_17->pgbuf));
  }

  case 132:
  case 130:
  case 131:
   return 0;

  case 139:
  {
   return 0;
  }

  case 129:
  {

   return 0;
  }
 }
 return -VAR_1;
}
