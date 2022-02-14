
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int cmd_len; int * cmnd; } ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
void FUNC_2(struct scsi_cmnd *VAR_0)
{
 char *VAR_1 = ((void*)0);
 int VAR_2;

 switch (VAR_0->cmnd[0]) {
 case 140: VAR_1 = "TEST_UNIT_READY"; break;
 case 156: VAR_1 = "REZERO_UNIT"; break;
 case 158: VAR_1 = "REQUEST_SENSE"; break;
 case 205: VAR_1 = "FORMAT_UNIT"; break;
 case 172: VAR_1 = "READ_BLOCK_LIMITS"; break;
 case 163: VAR_1 = "REASSIGN_BLOCKS"; break;
 case 173: VAR_1 = "READ_6"; break;
 case 135: VAR_1 = "WRITE_6"; break;
 case 148: VAR_1 = "SEEK_6"; break;
 case 165: VAR_1 = "READ_REVERSE"; break;
 case 133: VAR_1 = "WRITE_FILEMARKS"; break;
 case 143: VAR_1 = "SPACE"; break;
 case 185: VAR_1 = "INQUIRY"; break;
 case 161: VAR_1 = "RECOVER_BUFFERED_DATA"; break;
 case 180: VAR_1 = "MODE_SELECT"; break;
 case 157: VAR_1 = "RESERVE"; break;
 case 160: VAR_1 = "RELEASE"; break;
 case 208: VAR_1 = "COPY"; break;
 case 206: VAR_1 = "ERASE"; break;
 case 178: VAR_1 = "MODE_SENSE"; break;
 case 142: VAR_1 = "START_STOP"; break;
 case 162: VAR_1 = "RECEIVE_DIAGNOSTIC"; break;
 case 147: VAR_1 = "SEND_DIAGNOSTIC"; break;
 case 211: VAR_1 = "ALLOW_MEDIUM_REMOVAL"; break;
 case 144: VAR_1 = "SET_WINDOW"; break;
 case 170: VAR_1 = "READ_CAPACITY"; break;
 case 175: VAR_1 = "READ_10"; break;
 case 137: VAR_1 = "WRITE_10"; break;
 case 149: VAR_1 = "SEEK_10"; break;
 case 129: VAR_1 = "WRITE_VERIFY"; break;
 case 138: VAR_1 = "VERIFY"; break;
 case 153: VAR_1 = "SEARCH_HIGH"; break;
 case 155: VAR_1 = "SEARCH_EQUAL"; break;
 case 151: VAR_1 = "SEARCH_LOW"; break;
 case 145: VAR_1 = "SET_LIMITS"; break;
 case 166: VAR_1 = "READ_POSITION"; break;
 case 141: VAR_1 = "SYNCHRONIZE_CACHE"; break;
 case 184: VAR_1 = "LOCK_UNLOCK_CACHE"; break;
 case 169: VAR_1 = "READ_DEFECT_DATA"; break;
 case 181: VAR_1 = "MEDIUM_SCAN"; break;
 case 209: VAR_1 = "COMPARE"; break;
 case 207: VAR_1 = "COPY_VERIFY"; break;
 case 134: VAR_1 = "WRITE_BUFFER"; break;
 case 171: VAR_1 = "READ_BUFFER"; break;
 case 139: VAR_1 = "UPDATE_BLOCK"; break;
 case 167: VAR_1 = "READ_LONG"; break;
 case 132: VAR_1 = "WRITE_LONG"; break;
 case 210: VAR_1 = "CHANGE_DEFINITION"; break;
 case 130: VAR_1 = "WRITE_SAME"; break;
 case 193: VAR_1 = "READ SUBCHANNEL"; break;
 case 164: VAR_1 = "READ_TOC"; break;
 case 194: VAR_1 = "READ HEADER"; break;
 case 199: VAR_1 = "PLAY AUDIO (10)"; break;
 case 198: VAR_1 = "PLAY AUDIO MSF"; break;
 case 202:
  VAR_1 = "GET EVENT/STATUS NOTIFICATION"; break;
 case 200: VAR_1 = "PAUSE/RESUME"; break;
 case 183: VAR_1 = "LOG_SELECT"; break;
 case 182: VAR_1 = "LOG_SENSE"; break;
 case 186: VAR_1 = "STOP PLAY/SCAN"; break;
 case 195: VAR_1 = "READ DISC INFORMATION"; break;
 case 192:
  VAR_1 = "READ TRACK INFORMATION"; break;
 case 190: VAR_1 = "RESERVE TRACK"; break;
 case 188: VAR_1 = "SEND OPC"; break;
 case 179: VAR_1 = "MODE_SELECT_10"; break;
 case 191: VAR_1 = "REPAIR TRACK"; break;
 case 0x59: VAR_1 = "READ MASTER CUE"; break;
 case 177: VAR_1 = "MODE_SENSE_10"; break;
 case 203: VAR_1 = "CLOSE TRACK/SESSION"; break;
 case 0x5C: VAR_1 = "READ BUFFER CAPACITY"; break;
 case 0x5D: VAR_1 = "SEND CUE SHEET"; break;
 case 204: VAR_1 = "BLANK"; break;
 case 159: VAR_1 = "REPORT LUNS"; break;
 case 176: VAR_1 = "MOVE_MEDIUM or PLAY AUDIO (12)"; break;
 case 174: VAR_1 = "READ_12"; break;
 case 136: VAR_1 = "WRITE_12"; break;
 case 128: VAR_1 = "WRITE_VERIFY_12"; break;
 case 152: VAR_1 = "SEARCH_HIGH_12"; break;
 case 154: VAR_1 = "SEARCH_EQUAL_12"; break;
 case 150: VAR_1 = "SEARCH_LOW_12"; break;
 case 146: VAR_1 = "SEND_VOLUME_TAG"; break;
 case 168: VAR_1 = "READ_ELEMENT_STATUS"; break;
 case 196: VAR_1 = "READ CD MSF"; break;
 case 189: VAR_1 = "SCAN"; break;
 case 187: VAR_1 = "SET CD SPEED"; break;
 case 201: VAR_1 = "MECHANISM STATUS"; break;
 case 197: VAR_1 = "READ CD"; break;
 case 0xE1: VAR_1 = "WRITE CONTINUE"; break;
 case 131: VAR_1 = "WRITE_LONG_2"; break;
 default: VAR_1 = "(unknown command)"; break;
 }
 FUNC_0("Command %s (%d bytes)\n", VAR_1, VAR_0->cmd_len);
 FUNC_0("");
 for (VAR_2 = 0; VAR_2 < VAR_0->cmd_len && VAR_2 < 16; VAR_2++)
  FUNC_1(" %02x", VAR_0->cmnd[VAR_2]);
 FUNC_1("\n");
}
