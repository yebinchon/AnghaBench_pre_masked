
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip {int mtu; unsigned long buffsize; int lock; scalar_t__ xbits; scalar_t__ xdata; int slcomp; int cbuff; int xbuff; int rbuff; scalar_t__ xleft; scalar_t__ rcount; int * tty; } ;
typedef char slcompress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct slip *VAR_3, int VAR_4)
{
 int VAR_5 = -VAR_0;
 unsigned long VAR_6;
 char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 VAR_6 = VAR_4 * 2;






 if (VAR_6 < 576 * 2)
  VAR_6 = 576 * 2;
 VAR_7 = FUNC_1(VAR_6 + 4, VAR_2);
 if (VAR_7 == ((void*)0))
  goto err_exit;
 VAR_8 = FUNC_1(VAR_6 + 4, VAR_2);
 if (VAR_8 == ((void*)0))
  goto err_exit;
 FUNC_4(&VAR_3->lock);
 if (VAR_3->tty == ((void*)0)) {
  FUNC_5(&VAR_3->lock);
  VAR_5 = -VAR_1;
  goto err_exit;
 }
 VAR_3->mtu = VAR_4;
 VAR_3->buffsize = VAR_6;
 VAR_3->rcount = 0;
 VAR_3->xleft = 0;
 VAR_7 = FUNC_6(&VAR_3->rbuff, VAR_7);
 VAR_8 = FUNC_6(&VAR_3->xbuff, VAR_8);
 FUNC_5(&VAR_3->lock);
 VAR_5 = 0;


err_exit:





 FUNC_0(VAR_8);
 FUNC_0(VAR_7);
 return VAR_5;
}
