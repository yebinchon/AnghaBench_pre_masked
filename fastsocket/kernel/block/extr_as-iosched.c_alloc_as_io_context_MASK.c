
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as_io_context {int state; scalar_t__ seek_mean; scalar_t__ seek_samples; scalar_t__ seek_total; scalar_t__ ttime_mean; scalar_t__ ttime_samples; scalar_t__ ttime_total; int lock; int nr_dispatched; int nr_queued; int exit; int dtor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct as_io_context* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct as_io_context *FUNC_4(void)
{
 struct as_io_context *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (VAR_5) {
  VAR_5->dtor = VAR_4;
  VAR_5->exit = VAR_3;
  VAR_5->state = 1 << VAR_0;
  FUNC_0(&VAR_5->nr_queued, 0);
  FUNC_0(&VAR_5->nr_dispatched, 0);
  FUNC_3(&VAR_5->lock);
  VAR_5->ttime_total = 0;
  VAR_5->ttime_samples = 0;
  VAR_5->ttime_mean = 0;
  VAR_5->seek_total = 0;
  VAR_5->seek_samples = 0;
  VAR_5->seek_mean = 0;
  FUNC_1(VAR_2);
 }

 return VAR_5;
}
