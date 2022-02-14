
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ request; scalar_t__ seq; int is_reply; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ kdp_exception_ack_t ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ exception_seq; int exception_ack_needed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_3__ VAR_3 ;

boolean_t
FUNC_1(
    unsigned char *VAR_4,
    int VAR_5
)
{
    kdp_exception_ack_t *VAR_6 = (kdp_exception_ack_t *)VAR_4;

    if (((unsigned int) VAR_5) < sizeof (*VAR_6))
 return(VAR_0);

    if (!VAR_6->hdr.is_reply || VAR_6->hdr.request != VAR_1)
     return(VAR_0);

    FUNC_0(("kdp_exception_ack seq %x %x\n", VAR_6->hdr.seq, VAR_3.exception_seq));

    if (VAR_6->hdr.seq == VAR_3.exception_seq) {
 VAR_3.exception_ack_needed = VAR_0;
 VAR_3.exception_seq++;
    }
    return(VAR_2);
}
