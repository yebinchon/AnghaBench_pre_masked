
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_sa_query {int id; TYPE_1__* mad_buf; } ;
typedef int gfp_t ;
struct TYPE_2__ {int timeout_ms; struct ib_sa_query** context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,struct ib_sa_query*,int*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ib_sa_query *VAR_4, int VAR_5, gfp_t VAR_6)
{
 unsigned long VAR_7;
 int VAR_8, VAR_9;

retry:
 if (!FUNC_2(&VAR_3, VAR_6))
  return -VAR_1;
 FUNC_4(&VAR_2, VAR_7);
 VAR_8 = FUNC_1(&VAR_3, VAR_4, &VAR_9);
 FUNC_5(&VAR_2, VAR_7);
 if (VAR_8 == -VAR_0)
  goto retry;
 if (VAR_8)
  return VAR_8;

 VAR_4->mad_buf->timeout_ms = VAR_5;
 VAR_4->mad_buf->context[0] = VAR_4;
 VAR_4->id = VAR_9;

 VAR_8 = FUNC_0(VAR_4->mad_buf, ((void*)0));
 if (VAR_8) {
  FUNC_4(&VAR_2, VAR_7);
  FUNC_3(&VAR_3, VAR_9);
  FUNC_5(&VAR_2, VAR_7);
 }






 return VAR_8 ? VAR_8 : VAR_9;
}
