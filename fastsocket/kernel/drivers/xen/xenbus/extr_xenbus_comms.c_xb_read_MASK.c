
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenstore_domain_interface {scalar_t__ rsp_cons; int rsp; scalar_t__ rsp_prod; } ;
typedef scalar_t__ XENSTORE_RING_IDX ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 char* FUNC_1 (scalar_t__,scalar_t__,int ,unsigned int*) ;
 int FUNC_2 () ;
 int FUNC_3 (void*,char const*,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,unsigned int,unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_1 ;
 struct xenstore_domain_interface* VAR_2 ;

int FUNC_8(void *VAR_3, unsigned VAR_4)
{
 struct xenstore_domain_interface *VAR_5 = VAR_2;
 XENSTORE_RING_IDX VAR_6, VAR_7;
 int VAR_8;

 while (VAR_4 != 0) {
  unsigned int VAR_9;
  const char *VAR_10;

  VAR_8 = FUNC_7();
  if (VAR_8 < 0)
   return VAR_8;


  VAR_6 = VAR_5->rsp_cons;
  VAR_7 = VAR_5->rsp_prod;
  if (!FUNC_0(VAR_6, VAR_7)) {
   VAR_5->rsp_cons = VAR_5->rsp_prod = 0;
   return -VAR_0;
  }

  VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_5->rsp, &VAR_9);
  if (VAR_9 == 0)
   continue;
  if (VAR_9 > VAR_4)
   VAR_9 = VAR_4;


  FUNC_6();

  FUNC_3(VAR_3, VAR_10, VAR_9);
  VAR_3 += VAR_9;
  VAR_4 -= VAR_9;


  FUNC_2();
  VAR_5->rsp_cons += VAR_9;

  FUNC_5("Finished read of %i bytes (%i to go)\n", VAR_9, VAR_4);


  FUNC_4(VAR_1);
 }

 return 0;
}
