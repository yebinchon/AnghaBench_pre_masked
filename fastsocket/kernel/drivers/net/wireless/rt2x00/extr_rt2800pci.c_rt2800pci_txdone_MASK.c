
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rt2x00_dev {int txstatus_fifo; } ;
struct data_queue {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rt2x00_dev*,char*,scalar_t__) ;
 int FUNC_3 (struct data_queue*) ;
 int FUNC_4 (struct data_queue*,int ,int ,int *,int ) ;
 struct data_queue* FUNC_5 (struct rt2x00_dev*,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(struct rt2x00_dev *VAR_7)
{
 struct data_queue *VAR_8;
 u32 VAR_9;
 u8 VAR_10;
 int VAR_11 = 16;

 while (FUNC_0(&VAR_7->txstatus_fifo, &VAR_9)) {
  VAR_10 = FUNC_1(VAR_9, VAR_3);
  if (FUNC_6(VAR_10 >= VAR_0)) {




   FUNC_2(VAR_7, "Got TX status report with unexpected pid %u, dropping\n",
        VAR_10);
   break;
  }

  VAR_8 = FUNC_5(VAR_7, VAR_10);
  if (FUNC_6(VAR_8 == ((void*)0))) {




   FUNC_2(VAR_7, "Got TX status for an unavailable queue %u, dropping\n",
        VAR_10);
   break;
  }

  if (FUNC_6(FUNC_3(VAR_8))) {




   FUNC_2(VAR_7, "Got TX status for an empty queue %u, dropping\n",
        VAR_10);
   break;
  }





  if (!FUNC_4(VAR_8, VAR_2,
      VAR_1, &VAR_9,
      VAR_4)) {




   if (!FUNC_4(VAR_8, VAR_2,
       VAR_1, &VAR_9,
       VAR_5)) {
    FUNC_2(VAR_7, "No frame found for TX status on queue %u, dropping\n",
         VAR_10);
    break;
   }
  }




  FUNC_4(VAR_8, VAR_2,
        VAR_1, ((void*)0),
        VAR_6);

  if (--VAR_11 == 0)
   break;
 }

 return !VAR_11;
}
