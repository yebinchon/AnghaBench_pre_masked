
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {scalar_t__ results; int original_ip; int original_pp; scalar_t__ chunks; int * original_rows; scalar_t__ original_rowbytes; } ;


 int FUNC_0 (struct display*) ;
 int FUNC_1 (struct display*) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct display *VAR_0)
{



   FUNC_0(VAR_0);

   VAR_0->original_rowbytes = 0;
   VAR_0->original_rows = ((void*)0);
   VAR_0->chunks = 0;

   FUNC_2(&VAR_0->original_pp, &VAR_0->original_ip, ((void*)0));

   VAR_0->results = 0;
}
