
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenstore_domain_interface {scalar_t__ req_prod; scalar_t__ req_cons; int req; } ;
typedef scalar_t__ XENSTORE_RING_IDX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 void* FUNC_1 (scalar_t__,scalar_t__,int ,unsigned int*) ;
 int FUNC_2 () ;
 int FUNC_3 (void*,void const*,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct xenstore_domain_interface* VAR_4 ;

int FUNC_7(const void *VAR_5, unsigned VAR_6)
{
 struct xenstore_domain_interface *VAR_7 = VAR_4;
 XENSTORE_RING_IDX VAR_8, VAR_9;
 int VAR_10;

 while (VAR_6 != 0) {
  void *VAR_11;
  unsigned int VAR_12;

  VAR_10 = FUNC_5(
   VAR_2,
   (VAR_7->req_prod - VAR_7->req_cons) !=
   VAR_1);
  if (VAR_10 < 0)
   return VAR_10;


  VAR_8 = VAR_7->req_cons;
  VAR_9 = VAR_7->req_prod;
  if (!FUNC_0(VAR_8, VAR_9)) {
   VAR_7->req_cons = VAR_7->req_prod = 0;
   return -VAR_0;
  }

  VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_7->req, &VAR_12);
  if (VAR_12 == 0)
   continue;
  if (VAR_12 > VAR_6)
   VAR_12 = VAR_6;


  FUNC_2();

  FUNC_3(VAR_11, VAR_5, VAR_12);
  VAR_5 += VAR_12;
  VAR_6 -= VAR_12;


  FUNC_6();
  VAR_7->req_prod += VAR_12;


  FUNC_4(VAR_3);
 }

 return 0;
}
