
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int64_t ;
struct tb_regulator {scalar_t__ tbr_token; void* tbr_last; int tbr_filluptime; scalar_t__ tbr_depth; int tbr_rate; } ;
struct ifclassq {struct tb_regulator ifcq_tbr; } ;
typedef int mbuf_t ;
typedef int mbuf_svc_class_t ;
typedef int int64_t ;
typedef int classq_pkt_type_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (struct ifclassq*,void*,int*) ;
 int FUNC_1 (struct ifclassq*,int ,void*,int*) ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct ifclassq*) ;
 scalar_t__ FUNC_4 (int ) ;

 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 () ;

__attribute__((used)) static void *
FUNC_9(struct ifclassq *VAR_0, mbuf_svc_class_t VAR_1,
    boolean_t VAR_2, classq_pkt_type_t *VAR_3)
{
 struct tb_regulator *VAR_4;
 void *VAR_5;
 int64_t VAR_6;
 u_int64_t VAR_7;

 FUNC_2(VAR_0);

 FUNC_6(!VAR_2 || FUNC_4(VAR_1));
 FUNC_6(FUNC_3(VAR_0));

 VAR_4 = &VAR_0->ifcq_tbr;

 if (VAR_4->tbr_token <= 0) {
  VAR_7 = FUNC_8();
  VAR_6 = VAR_7 - VAR_4->tbr_last;
  if (VAR_6 >= VAR_4->tbr_filluptime) {
   VAR_4->tbr_token = VAR_4->tbr_depth;
  } else {
   VAR_4->tbr_token += VAR_6 * VAR_4->tbr_rate;
   if (VAR_4->tbr_token > VAR_4->tbr_depth)
    VAR_4->tbr_token = VAR_4->tbr_depth;
  }
  VAR_4->tbr_last = VAR_7;
 }

 if (VAR_4->tbr_token <= 0)
  return (((void*)0));





  if (VAR_2)
   FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3);
  else
   FUNC_0(VAR_0, VAR_5, VAR_3);

 if (VAR_5 != ((void*)0)) {
  switch (*VAR_3) {
  case 128:
   VAR_4->tbr_token -= FUNC_5(FUNC_7((mbuf_t)VAR_5));
   break;


  default:
   FUNC_6(0);

  }
 }

 return (VAR_5);
}
