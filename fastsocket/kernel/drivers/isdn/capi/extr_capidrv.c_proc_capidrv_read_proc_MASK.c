
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int nsentdatapkt; int nsentctlpkt; int nrecvdatapkt; int nrecvctlpkt; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(char *VAR_1, char **VAR_2, off_t VAR_3,
                                       int VAR_4, int *VAR_5, void *VAR_6)
{
 int VAR_7 = 0;

 VAR_7 += FUNC_0(VAR_1+VAR_7, "%lu %lu %lu %lu\n",
   VAR_0.ap.nrecvctlpkt,
   VAR_0.ap.nrecvdatapkt,
   VAR_0.ap.nsentctlpkt,
   VAR_0.ap.nsentdatapkt);
 if (VAR_3+VAR_4 >= VAR_7)
    *VAR_5 = 1;
 if (VAR_7 < VAR_3)
           return 0;
 *VAR_2 = VAR_1 + VAR_3;
 return ((VAR_4 < VAR_7-VAR_3) ? VAR_4 : VAR_7-VAR_3);
}
