
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {scalar_t__ out; scalar_t__ pStmt; } ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (scalar_t__,char*,int,...) ;
 int FUNC_1 (int *,int ,int*,int*,int) ;
 int FUNC_2 (int ,int*,int*,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_4(
  sqlite3 *VAR_21,
  struct callback_data *VAR_22,
  int VAR_23
){
  int VAR_24;
  int VAR_25;

  if( VAR_22 && VAR_22->out ){

    VAR_25 = VAR_24 = -1;
    FUNC_2(VAR_12, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Memory Used:                         %d (max %d) bytes\n", VAR_24, VAR_25);
    VAR_25 = VAR_24 = -1;
    FUNC_2(VAR_10, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Number of Outstanding Allocations:   %d (max %d)\n", VAR_24, VAR_25);






    VAR_25 = VAR_24 = -1;
    FUNC_2(VAR_13, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Number of Pcache Overflow Bytes:     %d (max %d) bytes\n", VAR_24, VAR_25);






    VAR_25 = VAR_24 = -1;
    FUNC_2(VAR_16, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Number of Scratch Overflow Bytes:    %d (max %d) bytes\n", VAR_24, VAR_25);
    VAR_25 = VAR_24 = -1;
    FUNC_2(VAR_11, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Largest Allocation:                  %d bytes\n", VAR_25);
    VAR_25 = VAR_24 = -1;
    FUNC_2(VAR_14, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Largest Pcache Allocation:           %d bytes\n", VAR_25);
    VAR_25 = VAR_24 = -1;
    FUNC_2(VAR_17, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Largest Scratch Allocation:          %d bytes\n", VAR_25);





  }

  if( VAR_22 && VAR_22->out && VAR_21 ){
    VAR_25 = VAR_24 = -1;
    FUNC_1(VAR_21, VAR_7, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Lookaside Slots Used:                %d (max %d)\n", VAR_24, VAR_25);
    FUNC_1(VAR_21, VAR_4, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Successful lookaside attempts:       %d\n", VAR_25);
    FUNC_1(VAR_21, VAR_6, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Lookaside failures due to size:      %d\n", VAR_25);
    FUNC_1(VAR_21, VAR_5, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Lookaside failures due to OOM:       %d\n", VAR_25);
    VAR_25 = VAR_24 = -1;
    FUNC_1(VAR_21, VAR_2, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Pager Heap Usage:                    %d bytes\n", VAR_24); VAR_25 = VAR_24 = -1;
    FUNC_1(VAR_21, VAR_0, &VAR_24, &VAR_25, 1);
    FUNC_0(VAR_22->out, "Page cache hits:                     %d\n", VAR_24);
    VAR_25 = VAR_24 = -1;
    FUNC_1(VAR_21, VAR_1, &VAR_24, &VAR_25, 1);
    FUNC_0(VAR_22->out, "Page cache misses:                   %d\n", VAR_24);
    VAR_25 = VAR_24 = -1;
    FUNC_1(VAR_21, VAR_3, &VAR_24, &VAR_25, 1);
    FUNC_0(VAR_22->out, "Page cache writes:                   %d\n", VAR_24);
    VAR_25 = VAR_24 = -1;
    FUNC_1(VAR_21, VAR_8, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Schema Heap Usage:                   %d bytes\n", VAR_24);
    VAR_25 = VAR_24 = -1;
    FUNC_1(VAR_21, VAR_9, &VAR_24, &VAR_25, VAR_23);
    FUNC_0(VAR_22->out, "Statement Heap/Lookaside Usage:      %d bytes\n", VAR_24);
  }

  if( VAR_22 && VAR_22->out && VAR_21 && VAR_22->pStmt ){
    VAR_24 = FUNC_3(VAR_22->pStmt, VAR_19, VAR_23);
    FUNC_0(VAR_22->out, "Fullscan Steps:                      %d\n", VAR_24);
    VAR_24 = FUNC_3(VAR_22->pStmt, VAR_20, VAR_23);
    FUNC_0(VAR_22->out, "Sort Operations:                     %d\n", VAR_24);
    VAR_24 = FUNC_3(VAR_22->pStmt, VAR_18, VAR_23);
    FUNC_0(VAR_22->out, "Autoindex Inserts:                   %d\n", VAR_24);
  }

  return 0;
}
