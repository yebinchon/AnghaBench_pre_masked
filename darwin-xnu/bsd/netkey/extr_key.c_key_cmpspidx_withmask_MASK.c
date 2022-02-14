
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct TYPE_10__ {scalar_t__ ss_len; scalar_t__ ss_family; } ;
struct TYPE_12__ {TYPE_2__ end; TYPE_2__ start; } ;
struct secpolicyindex {scalar_t__ ul_proto; TYPE_2__ dst; int prefd; TYPE_2__ src; TYPE_6__ dst_range; int prefs; TYPE_6__ src_range; int * internal_if; } ;
typedef int caddr_t ;
struct TYPE_11__ {int sin_addr; int sin_port; } ;
struct TYPE_9__ {int sin6_addr; int sin6_scope_id; int sin6_port; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_6__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(
       struct secpolicyindex *VAR_2,
       struct secpolicyindex *VAR_3)
{
    int VAR_4 = 0;
    int VAR_5 = 0;


 if (VAR_2 == ((void*)0) && VAR_3 == ((void*)0))
  return 1;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return 0;

    if (VAR_2->src_range.start.ss_len > 0)
        VAR_4 = 1;

    if (VAR_2->dst_range.start.ss_len > 0)
        VAR_5 = 1;

 if ((VAR_4 ? VAR_2->src_range.start.ss_family : VAR_2->src.ss_family) != VAR_3->src.ss_family ||
     (VAR_5 ? VAR_2->dst_range.start.ss_family : VAR_2->dst.ss_family) != VAR_3->dst.ss_family ||
     (VAR_4 ? VAR_2->src_range.start.ss_len : VAR_2->src.ss_len) != VAR_3->src.ss_len ||
     (VAR_5 ? VAR_2->dst_range.start.ss_len : VAR_2->dst.ss_len) != VAR_3->dst.ss_len)
  return 0;


 if (VAR_2->ul_proto != (u_int16_t)VAR_1
  && VAR_2->ul_proto != VAR_3->ul_proto)
  return 0;


    if (VAR_3->internal_if != ((void*)0)) {
        if (VAR_2->internal_if == ((void*)0)
            || VAR_2->internal_if != VAR_3->internal_if)
            return 0;


        switch (VAR_2->src.ss_family) {
            case 129:
                if (VAR_4 &&
                    (FUNC_3(&VAR_3->src)->sin_port < FUNC_3(&VAR_2->src_range.start)->sin_port
                     || FUNC_3(&VAR_3->src)->sin_port > FUNC_3(&VAR_2->src_range.end)->sin_port))
                    return 0;
                else if (FUNC_3(&VAR_2->src)->sin_port != VAR_0
       && FUNC_3(&VAR_2->src)->sin_port !=
       FUNC_3(&VAR_3->src)->sin_port)
                    return 0;
                break;
            case 128:
                if (VAR_4 &&
                    (FUNC_4(&VAR_3->src)->sin6_port < FUNC_4(&VAR_2->src_range.start)->sin6_port
                     || FUNC_4(&VAR_3->src)->sin6_port > FUNC_4(&VAR_2->src_range.end)->sin6_port))
                    return 0;
                else if (FUNC_4(&VAR_2->src)->sin6_port != VAR_0
       && FUNC_4(&VAR_2->src)->sin6_port !=
       FUNC_4(&VAR_3->src)->sin6_port)
                    return 0;
                break;
            default:
                break;
        }
    } else if (VAR_4) {
        if (!FUNC_2(&VAR_3->src, &VAR_2->src_range))
            return 0;
    } else {
        switch (VAR_2->src.ss_family) {
            case 129:
                if (FUNC_3(&VAR_2->src)->sin_port != VAR_0
     && FUNC_3(&VAR_2->src)->sin_port !=
                    FUNC_3(&VAR_3->src)->sin_port)
                    return 0;
                if (!FUNC_1((caddr_t)&FUNC_3(&VAR_2->src)->sin_addr,
          (caddr_t)&FUNC_3(&VAR_3->src)->sin_addr, VAR_2->prefs))
                    return 0;
                break;
            case 128:
                if (FUNC_4(&VAR_2->src)->sin6_port != VAR_0
     && FUNC_4(&VAR_2->src)->sin6_port !=
                    FUNC_4(&VAR_3->src)->sin6_port)
                    return 0;




                if (FUNC_4(&VAR_2->src)->sin6_scope_id &&
                    FUNC_4(&VAR_3->src)->sin6_scope_id &&
                    FUNC_4(&VAR_2->src)->sin6_scope_id !=
                    FUNC_4(&VAR_3->src)->sin6_scope_id)
                    return 0;
                if (!FUNC_1((caddr_t)&FUNC_4(&VAR_2->src)->sin6_addr,
          (caddr_t)&FUNC_4(&VAR_3->src)->sin6_addr, VAR_2->prefs))
                    return 0;
                break;
            default:

                if (FUNC_0(&VAR_2->src, &VAR_3->src, VAR_2->src.ss_len) != 0)
                    return 0;
                break;
        }
    }

    if (VAR_5) {
        if (!FUNC_2(&VAR_3->dst, &VAR_2->dst_range))
            return 0;
    } else {
        switch (VAR_2->dst.ss_family) {
            case 129:
                if (FUNC_3(&VAR_2->dst)->sin_port != VAR_0
     && FUNC_3(&VAR_2->dst)->sin_port !=
                    FUNC_3(&VAR_3->dst)->sin_port)
                    return 0;
                if (!FUNC_1((caddr_t)&FUNC_3(&VAR_2->dst)->sin_addr,
          (caddr_t)&FUNC_3(&VAR_3->dst)->sin_addr, VAR_2->prefd))
                    return 0;
                break;
            case 128:
                if (FUNC_4(&VAR_2->dst)->sin6_port != VAR_0
     && FUNC_4(&VAR_2->dst)->sin6_port !=
                    FUNC_4(&VAR_3->dst)->sin6_port)
                    return 0;




                if (FUNC_4(&VAR_2->src)->sin6_scope_id &&
                    FUNC_4(&VAR_3->src)->sin6_scope_id &&
                    FUNC_4(&VAR_2->dst)->sin6_scope_id !=
                    FUNC_4(&VAR_3->dst)->sin6_scope_id)
                    return 0;
                if (!FUNC_1((caddr_t)&FUNC_4(&VAR_2->dst)->sin6_addr,
          (caddr_t)&FUNC_4(&VAR_3->dst)->sin6_addr, VAR_2->prefd))
                    return 0;
                break;
            default:

                if (FUNC_0(&VAR_2->dst, &VAR_3->dst, VAR_2->dst.ss_len) != 0)
                    return 0;
                break;
        }
    }



 return 1;
}
