
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fq_codel_flowstats {int fqst_flags; int fqst_flowhash; int fqst_bytes; int fqst_min_qdelay; } ;
struct TYPE_5__ {int fq_flags; int fq_flowhash; int fq_bytes; int fq_min_qdelay; } ;
typedef TYPE_1__ fq_t ;
struct TYPE_6__ {TYPE_1__* fqs_large_flow; } ;
typedef TYPE_2__ fq_if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fq_codel_flowstats*,int) ;

__attribute__((used)) static void
FUNC_1(fq_if_t *VAR_9, fq_t *VAR_10,
    struct fq_codel_flowstats *VAR_11)
{
 FUNC_0(VAR_11, sizeof (*VAR_11));
 VAR_11->fqst_min_qdelay = VAR_10->fq_min_qdelay;
 VAR_11->fqst_bytes = VAR_10->fq_bytes;
 VAR_11->fqst_flowhash = VAR_10->fq_flowhash;
 if (VAR_10->fq_flags & VAR_2)
  VAR_11->fqst_flags |= VAR_7;
 if (VAR_10->fq_flags & VAR_3)
  VAR_11->fqst_flags |= VAR_8;
 if (VAR_10->fq_flags & VAR_0)
  VAR_11->fqst_flags |= VAR_4;
 if (VAR_10->fq_flags & VAR_1)
  VAR_11->fqst_flags |= VAR_5;
 if (VAR_9->fqs_large_flow == VAR_10)
  VAR_11->fqst_flags |= VAR_6;
}
